// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_7\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 88.50%
// test_accuracy: 71.09%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_35.txt', 'act1\\trial_19.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 17:02:04
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.089633, -0.089725,
    -0.132987, 0.133212,
    0.029270, -0.029313,
    -0.185757, 0.185662,
    1.709985, -1.710105,
    -1.590673, 1.590803,
    -0.201907, 0.201896,
    0.236370, -0.236378,
    -0.627893, 0.627945,
    -0.648168, 0.648092,
    0.318392, -0.318383,
    1.603706, -1.603711,
};

float Cg_init[2] = {
    -0.594496, -0.594526
};

float xstd_init[12] = {
    0.000875, 0.000083, 0.008014, 0.066015, 0.000809, 0.000144, 0.015373, 0.056355, 0.003475, 0.001037, 0.119515, 0.209554
};

float xmean_init[12] = {
    0.005559, -0.007758, 0.001867, 0.091700, 0.002425, -0.007842, 0.005400, 0.050200, 0.009044, -0.006605, 0.134934, 0.470800
};

