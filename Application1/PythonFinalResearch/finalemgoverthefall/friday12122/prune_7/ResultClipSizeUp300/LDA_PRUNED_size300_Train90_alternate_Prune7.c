// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_7\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.17%
// test_accuracy: 77.50%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_2.txt', 'act2\\trial_29.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-12 16:05:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.890718, 0.890757,
    -0.208933, 0.208969,
    0.649140, -0.649162,
    0.767109, -0.767127,
    1.118247, -1.118270,
    -1.783607, 1.783632,
    0.319888, -0.319908,
    0.203670, -0.203654,
    -0.229885, 0.229959,
    0.497000, -0.497313,
    -0.551793, 0.551904,
    0.251682, -0.251546,
};

float Cg_init[2] = {
    -0.472024, -0.472053
};

float xstd_init[12] = {
    0.003712, 0.001363, 0.098438, 0.167537, 0.001701, 0.000526, 0.029969, 0.084417, 0.000941, 0.000099, 0.020319, 0.068393
};

float xmean_init[12] = {
    0.009780, -0.006269, 0.166989, 0.568827, 0.003295, -0.007697, 0.007172, 0.052828, 0.003223, -0.007804, 0.005241, 0.068000
};

