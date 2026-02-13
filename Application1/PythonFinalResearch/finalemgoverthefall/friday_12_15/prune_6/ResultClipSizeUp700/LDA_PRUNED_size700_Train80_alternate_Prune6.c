// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_6\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.70%
// test_accuracy: 69.71%
// prune_trials_per_label: 6
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_18.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_28.txt']}
// generated: 2025-12-12 12:42:32
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.621180, 0.621233,
    0.100824, -0.100886,
    0.386487, -0.386533,
    0.646774, -0.646763,
    -0.490202, 0.490141,
    0.203505, -0.203388,
    -0.073587, 0.073587,
    -0.009278, 0.009229,
    0.234342, -0.234146,
    -0.107220, 0.106829,
    -0.485179, 0.485284,
    0.040427, -0.040304,
};

float Cg_init[2] = {
    -0.275703, -0.275706
};

float xstd_init[12] = {
    0.004240, 0.001941, 0.147787, 0.203530, 0.001088, 0.000195, 0.027904, 0.082437, 0.000666, 0.000166, 0.029012, 0.107086
};

float xmean_init[12] = {
    0.010280, -0.005739, 0.241855, 0.683787, 0.003388, -0.007762, 0.009507, 0.075385, 0.003522, -0.007733, 0.013176, 0.119290
};

