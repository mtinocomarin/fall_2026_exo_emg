// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_8\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.44%
// test_accuracy: 74.17%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_15.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 17:03:03
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.283920, 0.283725,
    -0.127022, 0.127524,
    -0.028577, 0.028506,
    0.147750, -0.147998,
    1.488518, -1.488750,
    -1.025600, 1.025846,
    -0.109035, 0.108996,
    0.118217, -0.118247,
    -0.570078, 0.570152,
    -0.440825, 0.440732,
    0.519221, -0.519232,
    1.033893, -1.033893,
};

float Cg_init[2] = {
    -0.509879, -0.509950
};

float xstd_init[12] = {
    0.000916, 0.000074, 0.008380, 0.065330, 0.000663, 0.000102, 0.014088, 0.049683, 0.003363, 0.001033, 0.117437, 0.210870
};

float xmean_init[12] = {
    0.005538, -0.007758, 0.002222, 0.092389, 0.002349, -0.007857, 0.004370, 0.044889, 0.008994, -0.006583, 0.134926, 0.473333
};

