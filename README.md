# fathom-data-schema-forge

`fathom-data-schema-forge` is a C++ project in data engineering. Its focus is to build a C++ toolkit that studies schema behavior through framed sample traffic, with bounds and ordering tests and fixture-scale datasets.

## Use Case

The point is to make a small domain rule concrete enough that a reader can change it and immediately see what broke.

## Fathom Data Schema Forge Review Notes

The first comparison I would make is `schema drift` against `schema drift` because it shows where the rule is most opinionated.

## Highlights

- `fixtures/domain_review.csv` adds cases for schema drift and lineage depth.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/fathom-data-schema-walkthrough.md` walks through the case spread.
- The C++ code includes a review path for `schema drift` and `schema drift`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Code Layout

The fixture data drives the tests. The code stays thin, while `metadata/domain-review.json` and `config/review-profile.json` explain what each case is meant to protect.

The C++ addition stays small enough to inspect in one sitting.

## Run The Check

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Regression Path

The check exercises the source code and the review fixture. `stale` is the high score at 205; `baseline` is the low score at 147.

## Future Work

No external service is required. A deeper version would add more negative cases and a clearer boundary around invalid input.
