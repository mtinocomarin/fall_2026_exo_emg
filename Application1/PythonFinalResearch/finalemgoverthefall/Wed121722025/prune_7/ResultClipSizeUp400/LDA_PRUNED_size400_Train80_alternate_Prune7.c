// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_7\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 76.29%
// test_accuracy: 55.36%
// prune_trials_per_label: 7
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_3.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-17 13:44:48
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.556374, 0.556383,
    0.342763, -0.342797,
    0.232584, -0.232572,
    -0.221434, 0.221449,
    -0.597880, 0.597940,
    -0.179425, 0.179362,
    0.345153, -0.345155,
    0.146269, -0.146284,
    -0.761811, 0.761751,
    0.376039, -0.375909,
    -0.151132, 0.151093,
    0.270222, -0.270267,
};

float Cg_init[2] = {
    -0.266149, -0.266144
};

float xstd_init[12] = {
    0.001050, 0.000082, 0.010962, 0.079297, 0.002925, 0.000818, 0.084659, 0.174162, 0.000875, 0.000112, 0.017257, 0.074183
};

float xmean_init[12] = {
    0.006475, -0.007686, 0.004038, 0.142972, 0.008721, -0.006841, 0.104914, 0.452229, 0.004342, -0.007718, 0.008533, 0.126972
};

