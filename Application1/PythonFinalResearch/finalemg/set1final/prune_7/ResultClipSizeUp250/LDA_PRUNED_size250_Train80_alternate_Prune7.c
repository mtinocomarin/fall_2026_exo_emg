// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 100.00%
// test_accuracy: 62.50%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_3.txt', 'act2\\trial_4.txt', 'act2\\trial_5.txt', 'act2\\trial_6.txt'], 'act1': ['act1\\trial_1.txt', 'act1\\trial_10.txt', 'act1\\trial_2.txt', 'act1\\trial_3.txt', 'act1\\trial_4.txt', 'act1\\trial_5.txt', 'act1\\trial_6.txt']}
// generated: 2026-02-13 17:10:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.220661, 1.220662,
    -0.529788, 0.529788,
    0.000000, 0.000000,
    -0.426956, -0.426956,
    -0.164184, -0.164184,
    -0.401671, -0.401671,
    -0.304270, -0.304270,
    0.923036, 0.923036,
    0.710958, 0.710958,
    0.276387, 0.276387,
    -0.496078, -0.496078,
    0.307897, 0.307897,
};

float Cg_init[2] = {
    -1.153713, -0.115922
};

float xstd_init[12] = {
    0.000140, 0.000012, 1.000000, 0.018516, 0.002853, 0.000893, 0.074663, 0.126039, 0.000862, 0.000341, 0.074663, 0.149571
};

float xmean_init[12] = {
    0.002794, -0.007916, 0.000000, 0.010000, 0.009181, -0.006196, 0.163333, 0.570000, 0.006628, -0.007070, 0.110000, 0.375000
};

