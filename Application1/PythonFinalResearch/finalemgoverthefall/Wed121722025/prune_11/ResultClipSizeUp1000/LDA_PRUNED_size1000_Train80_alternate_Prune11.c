// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_11\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.68%
// test_accuracy: 53.62%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_12.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_33.txt', 'act2\\trial_11.txt', 'act2\\trial_25.txt', 'act2\\trial_21.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt', 'act2\\trial_10.txt', 'act2\\trial_19.txt']}
// generated: 2025-12-17 13:47:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.365236, 0.365026,
    0.210889, -0.210390,
    -0.025551, 0.025500,
    -0.057734, 0.057460,
    -0.361269, 0.361304,
    -0.172875, 0.172880,
    -0.235767, 0.235742,
    0.352697, -0.352694,
    -0.509189, 0.509267,
    0.310127, -0.310314,
    0.044134, -0.044065,
    0.103568, -0.103514,
};

float Cg_init[2] = {
    -0.183203, -0.183183
};

float xstd_init[12] = {
    0.001087, 0.000083, 0.013349, 0.080932, 0.003165, 0.000874, 0.090545, 0.183521, 0.000865, 0.000113, 0.020096, 0.077097
};

float xmean_init[12] = {
    0.006571, -0.007683, 0.005447, 0.148823, 0.008398, -0.006889, 0.098914, 0.426116, 0.004404, -0.007711, 0.010860, 0.130126
};

