# fathom-data-schema-forge

`fathom-data-schema-forge` treats data engineering as a local verification problem. The C++ implementation is intentionally narrow, but the fixtures and notes make the behavior explicit.

## Fathom Data Schema Forge Checkpoints

Treat the compact fixture as the contract and the extended examples as a scratchpad. The code should stay boring enough that a change in behavior is obvious from the test output.

## What This Is For

The repository exists to keep a technical idea small enough to reason about. The implementation avoids external dependencies where possible, then uses fixtures to make changes easy to review.

## Project Layout

- `src`: primary implementation
- `tests`: verification harness
- `fixtures`: compact golden scenarios
- `examples`: expanded scenario set
- `metadata`: project constants and verification metadata
- `docs`: operations and extension notes
- `scripts`: local verification and audit commands

## Useful Pieces

- Includes extended examples for pipeline state, including `surge` and `degraded`.
- Documents quality gates tradeoffs in `docs/operations.md`.
- Runs locally with a single verification command and no external credentials.
- Stores project constants and verification metadata in `metadata/project.json`.
- Adds a repository audit script that checks structure before running the language verifier.

## Architecture Notes

The core is a scoring model over demand, capacity, latency, risk, and weight. That keeps schema drift, lineage checks, and pipeline state in one explicit decision path. The threshold is 154, with risk penalty 7, latency penalty 3, and weight bonus 4. The C++ project uses a small library boundary and a compiled assertion harness.

## Tooling

Install C++ and run the commands from the repository root. The project does not need credentials or a hosted service.

## Case Study

The extended cases are not random smoke tests. `degraded` keeps pressure on the review path, while `surge` shows the model when capacity and weight are strong enough to clear the threshold.

## Local Workflow

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

This runs the language-level build or test path against the compact fixture set.

## Quality Gate

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/audit.ps1
```

The audit command checks repository structure and README constraints before it delegates to the verifier.

## Expansion Ideas

- Add malformed input fixtures so the failure path is as visible as the happy path.
- Split the scoring constants into a typed configuration object and validate it before use.
- Add a comparison mode that shows how decisions change when one signal is adjusted.
- Add one more data engineering fixture that focuses on a malformed or borderline input.

## Scope

The scoring model is simple by design. More domain-specific behavior should be added through explicit adapters or extra fixture classes rather than hidden constants.
