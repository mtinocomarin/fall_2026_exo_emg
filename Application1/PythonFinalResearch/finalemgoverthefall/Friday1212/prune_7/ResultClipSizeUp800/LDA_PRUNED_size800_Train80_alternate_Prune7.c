// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_7\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.67%
// test_accuracy: 75.00%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_40.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 15:49:45
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.727216, 0.727203,
    -0.303257, 0.303279,
    0.500692, -0.500732,
    0.570173, -0.570144,
    0.928634, -0.928704,
    -0.919258, 0.919361,
    -0.205185, 0.205170,
    -0.041207, 0.041190,
    0.656393, -0.656403,
    0.022077, -0.021997,
    -0.379180, 0.379158,
    0.023267, -0.023321,
};

float Cg_init[2] = {
    -0.459923, -0.459934
};

float xstd_init[12] = {
    0.003593, 0.001365, 0.107410, 0.172086, 0.001232, 0.000376, 0.019171, 0.069132, 0.000510, 0.000075, 0.015001, 0.060871
};

float xmean_init[12] = {
    0.009658, -0.006261, 0.177458, 0.589760, 0.003065, -0.007760, 0.005049, 0.048480, 0.003096, -0.007813, 0.003769, 0.065654
};

