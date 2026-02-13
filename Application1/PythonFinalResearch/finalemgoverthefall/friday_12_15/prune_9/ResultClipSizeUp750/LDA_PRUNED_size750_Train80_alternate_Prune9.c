// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_9\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.06%
// test_accuracy: 66.07%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-12 12:44:23
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.671868, 0.671871,
    0.143692, -0.143692,
    0.424760, -0.424796,
    0.675143, -0.675123,
    -0.337781, 0.337893,
    0.120294, -0.120415,
    -0.043821, 0.043827,
    -0.135114, 0.135115,
    0.295648, -0.295559,
    -0.103642, 0.103539,
    -0.594135, 0.594164,
    -0.000840, 0.000831,
};

float Cg_init[2] = {
    -0.310505, -0.310506
};

float xstd_init[12] = {
    0.004024, 0.001734, 0.151364, 0.204765, 0.001092, 0.000187, 0.028566, 0.080903, 0.000663, 0.000167, 0.030822, 0.107159
};

float xmean_init[12] = {
    0.010195, -0.005772, 0.244266, 0.687702, 0.003387, -0.007763, 0.008986, 0.076274, 0.003525, -0.007731, 0.013416, 0.119193
};

