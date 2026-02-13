// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 77.24%
// test_accuracy: 58.33%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 13:44:12
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.579438, 0.579462,
    0.203599, -0.203605,
    0.149159, -0.149165,
    -0.046678, 0.046673,
    -0.502968, 0.502916,
    -0.114573, 0.114620,
    0.237466, -0.237453,
    0.013072, -0.013061,
    -0.673387, 0.673483,
    0.304698, -0.304857,
    -0.100533, 0.100581,
    0.256807, -0.256774,
};

float Cg_init[2] = {
    -0.239906, -0.239921
};

float xstd_init[12] = {
    0.001023, 0.000081, 0.011902, 0.079026, 0.002783, 0.000769, 0.080115, 0.167574, 0.000880, 0.000118, 0.017352, 0.072579
};

float xmean_init[12] = {
    0.006415, -0.007691, 0.004786, 0.140769, 0.008647, -0.006858, 0.103675, 0.448077, 0.004370, -0.007716, 0.008034, 0.129359
};

