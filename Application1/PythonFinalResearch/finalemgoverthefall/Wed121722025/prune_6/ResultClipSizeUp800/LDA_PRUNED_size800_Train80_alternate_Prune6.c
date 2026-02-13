// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_6\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 70.64%
// test_accuracy: 53.75%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_22.txt']}
// generated: 2025-12-17 13:44:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.429824, 0.429797,
    0.274632, -0.274570,
    -0.055393, 0.055390,
    -0.145422, 0.145377,
    -0.253726, 0.253851,
    -0.261141, 0.261025,
    -0.057417, 0.057412,
    0.302999, -0.303020,
    -0.429546, 0.429536,
    0.240801, -0.240761,
    -0.001675, 0.001677,
    0.068106, -0.068139,
};

float Cg_init[2] = {
    -0.140537, -0.140528
};

float xstd_init[12] = {
    0.001029, 0.000081, 0.012432, 0.080826, 0.003161, 0.000852, 0.091973, 0.186039, 0.000871, 0.000113, 0.019799, 0.075919
};

float xmean_init[12] = {
    0.006499, -0.007686, 0.005026, 0.146770, 0.008552, -0.006865, 0.104240, 0.436206, 0.004382, -0.007710, 0.011077, 0.131077
};

