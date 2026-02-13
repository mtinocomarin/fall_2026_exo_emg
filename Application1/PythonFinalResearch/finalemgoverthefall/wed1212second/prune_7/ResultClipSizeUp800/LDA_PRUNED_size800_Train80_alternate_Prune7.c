// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_7\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 84.93%
// test_accuracy: 75.00%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_15.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_30.txt']}
// generated: 2025-12-17 17:02:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.262777, 0.262488,
    -0.111187, 0.111844,
    -0.016459, 0.016370,
    0.089538, -0.089859,
    1.446230, -1.446365,
    -0.997684, 0.997786,
    -0.097648, 0.097644,
    0.093708, -0.093709,
    -0.605370, 0.605448,
    -0.365661, 0.365558,
    0.421836, -0.421831,
    0.972410, -0.972426,
};

float Cg_init[2] = {
    -0.454788, -0.454827
};

float xstd_init[12] = {
    0.000901, 0.000073, 0.008222, 0.064737, 0.000653, 0.000100, 0.013853, 0.049327, 0.003416, 0.001037, 0.118411, 0.209795
};

float xmean_init[12] = {
    0.005534, -0.007757, 0.002133, 0.092320, 0.002340, -0.007858, 0.004231, 0.044374, 0.009035, -0.006581, 0.135681, 0.473653
};

