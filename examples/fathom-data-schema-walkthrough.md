# Fathom Data Schema Forge Walkthrough

This walk-through keeps the domain vocabulary close to the data instead of burying it in prose.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | schema drift | 147 | ship |
| stress | lineage depth | 200 | ship |
| edge | partition skew | 167 | ship |
| recovery | quality gap | 158 | ship |
| stale | schema drift | 205 | ship |

Start with `stale` and `baseline`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

If `baseline` becomes less cautious without a clear reason, I would inspect the drag input first.
