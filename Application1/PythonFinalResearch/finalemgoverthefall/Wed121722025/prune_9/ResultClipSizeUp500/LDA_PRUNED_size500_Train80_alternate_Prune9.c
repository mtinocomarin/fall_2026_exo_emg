// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.02%
// test_accuracy: 56.25%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_18.txt', 'act2\\trial_22.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-17 13:45:58
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.676282, 0.676276,
    0.277628, -0.277625,
    0.117057, -0.117054,
    -0.175990, 0.175985,
    -0.561888, 0.561907,
    -0.149125, 0.149117,
    0.168766, -0.168774,
    0.204399, -0.204410,
    -0.572615, 0.572587,
    0.200581, -0.200503,
    -0.042206, 0.042188,
    0.240587, -0.240626,
};

float Cg_init[2] = {
    -0.270737, -0.270735
};

float xstd_init[12] = {
    0.001035, 0.000079, 0.011080, 0.080178, 0.003086, 0.000844, 0.087069, 0.176810, 0.000857, 0.000107, 0.017502, 0.073497
};

float xmean_init[12] = {
    0.006426, -0.007689, 0.003865, 0.145604, 0.008574, -0.006871, 0.100097, 0.433623, 0.004415, -0.007712, 0.009275, 0.133430
};

