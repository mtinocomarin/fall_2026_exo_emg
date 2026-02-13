// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_3\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.91%
// test_accuracy: 81.25%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 15:46:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.557562, 0.557598,
    -0.386911, 0.386887,
    0.542274, -0.542264,
    0.413542, -0.413571,
    1.135444, -1.135437,
    -1.220172, 1.220249,
    0.019714, -0.019783,
    0.054598, -0.054599,
    0.802712, -0.802551,
    -0.553380, 0.552979,
    -0.291219, 0.291342,
    0.540448, -0.540296,
};

float Cg_init[2] = {
    -0.480212, -0.480180
};

float xstd_init[12] = {
    0.003298, 0.001136, 0.095917, 0.159542, 0.001447, 0.000461, 0.025089, 0.073368, 0.000525, 0.000097, 0.016891, 0.062461
};

float xmean_init[12] = {
    0.009682, -0.006278, 0.169655, 0.574483, 0.003065, -0.007752, 0.005670, 0.042988, 0.003108, -0.007807, 0.003831, 0.063908
};

