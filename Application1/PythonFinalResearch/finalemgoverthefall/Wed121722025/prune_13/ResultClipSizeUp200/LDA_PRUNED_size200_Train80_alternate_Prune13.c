// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.72%
// test_accuracy: 60.42%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_28.txt', 'act1\\trial_37.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_14.txt', 'act1\\trial_17.txt', 'act1\\trial_19.txt', 'act1\\trial_2.txt', 'act1\\trial_22.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_3.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt']}
// generated: 2025-12-17 13:47:49
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.726105, 0.726140,
    -0.021551, 0.021470,
    0.201253, -0.201239,
    0.206556, -0.206519,
    -0.959619, 0.959603,
    0.110447, -0.110437,
    0.360429, -0.360436,
    -0.002224, 0.002231,
    -1.189047, 1.189050,
    0.270166, -0.270177,
    -0.441922, 0.441924,
    0.967609, -0.967611,
};

float Cg_init[2] = {
    -0.501795, -0.501788
};

float xstd_init[12] = {
    0.001046, 0.000079, 0.010391, 0.079789, 0.002455, 0.000682, 0.077391, 0.161117, 0.000992, 0.000129, 0.021328, 0.079148
};

float xmean_init[12] = {
    0.006513, -0.007686, 0.004211, 0.143509, 0.008688, -0.006897, 0.102924, 0.453333, 0.004374, -0.007712, 0.012164, 0.138947
};

