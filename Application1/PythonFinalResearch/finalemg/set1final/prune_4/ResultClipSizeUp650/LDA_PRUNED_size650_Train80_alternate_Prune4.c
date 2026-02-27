// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_4\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.00%
// test_accuracy: 64.58%
// prune_trials_per_label: 4
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt'], 'act1': ['act1\\trial_10.txt', 'act1\\trial_8.txt', 'act1\\trial_1.txt', 'act1\\trial_2.txt']}
// generated: 2026-02-13 17:10:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.884616, 0.884613,
    0.282518, -0.282544,
    0.000000, 0.000000,
    -0.429209, -0.429209,
    0.342060, 0.342060,
    0.634187, 0.634187,
    1.412223, 1.412223,
    0.978941, 0.978941,
    -0.404766, -0.404766,
    -0.501534, -0.501534,
    -0.047433, -0.047433,
    -0.288731, -0.288731,
};

float Cg_init[2] = {
    0.149610, -0.678318
};

float xstd_init[12] = {
    0.000343, 0.000017, 1.000000, 0.015350, 0.001965, 0.000672, 0.068247, 0.120534, 0.001852, 0.000554, 0.072605, 0.186446
};

float xmean_init[12] = {
    0.002619, -0.007911, 0.000000, 0.007083, 0.008214, -0.006684, 0.141389, 0.447500, 0.006388, -0.007031, 0.098611, 0.360000
};

