// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_5\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 51.19%
// test_accuracy: 50.00%
// prune_trials_per_label: 5
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt']}
// generated: 2026-02-13 17:10:44
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.332324, 0.332326,
    0.054677, -0.054765,
    0.000000, 0.000000,
    -0.429369, -0.429369,
    -0.747557, -0.747557,
    -0.638293, -0.638293,
    0.425847, 0.425847,
    0.385816, 0.385816,
    -0.447915, -0.447915,
    -0.566658, -0.566658,
    -0.398267, -0.398267,
    -0.543823, -0.543823,
};

float Cg_init[2] = {
    0.478076, -0.582196
};

float xstd_init[12] = {
    0.000236, 0.000016, 1.000000, 0.017139, 0.001696, 0.000622, 0.073002, 0.121361, 0.001691, 0.000498, 0.069925, 0.159394
};

float xmean_init[12] = {
    0.002684, -0.007909, 0.000000, 0.009524, 0.008422, -0.006610, 0.143809, 0.455714, 0.006353, -0.007072, 0.100635, 0.359048
};

