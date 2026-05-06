# Review Journal

The cases below are the review handles I would use before changing the implementation.

The local checks classify each case as `ship`, `watch`, or `hold`. That gives the project a small review vocabulary that matches its data engineering focus without claiming live deployment or external usage.

## Cases

- `baseline`: `schema drift`, score 147, lane `ship`
- `stress`: `lineage depth`, score 200, lane `ship`
- `edge`: `partition skew`, score 167, lane `ship`
- `recovery`: `quality gap`, score 158, lane `ship`
- `stale`: `schema drift`, score 205, lane `ship`

## Note

A future change should add new cases before it changes the scoring rule.
