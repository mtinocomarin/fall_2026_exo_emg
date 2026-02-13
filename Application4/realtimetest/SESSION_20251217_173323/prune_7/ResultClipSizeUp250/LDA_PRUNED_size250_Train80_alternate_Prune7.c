// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\prune_7\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application4\realtimetest\SESSION_20251217_173323\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.71%
// test_accuracy: 72.50%
// prune_trials_per_label: 7
// removed_trials: {'act1': ['act1\\trial_20.txt', 'act1\\trial_22.txt', 'act1\\trial_12.txt', 'act1\\trial_15.txt', 'act1\\trial_16.txt', 'act1\\trial_2.txt', 'act1\\trial_24.txt'], 'act2': ['act2\\trial_8.txt', 'act2\\trial_10.txt', 'act2\\trial_2.txt', 'act2\\trial_20.txt', 'act2\\trial_24.txt', 'act2\\trial_12.txt', 'act2\\trial_16.txt']}
// generated: 2025-12-17 18:09:21
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.628388, 0.628290,
    0.999203, -0.998923,
    -0.009272, 0.009157,
    -0.283923, 0.283848,
    1.466293, -1.466389,
    -0.030978, 0.031023,
    -1.565180, 1.565146,
    -1.069704, 1.069758,
    -0.852049, 0.852021,
    -0.182454, 0.182461,
    0.027557, -0.027572,
    2.285194, -2.285181,
};

float Cg_init[2] = {
    -0.817755, -0.817736
};

float xstd_init[12] = {
    0.001139, 0.000128, 0.025809, 0.096463, 0.002638, 0.000727, 0.065195, 0.152559, 0.005289, 0.002004, 0.171126, 0.255167
};

float xmean_init[12] = {
    0.005401, -0.007726, 0.008611, 0.122917, 0.004292, -0.007540, 0.027778, 0.141250, 0.011766, -0.005781, 0.189167, 0.541250
};

