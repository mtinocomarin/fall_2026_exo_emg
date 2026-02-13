// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_4\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 73.57%
// test_accuracy: 55.00%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_25.txt']}
// generated: 2025-12-17 13:43:06
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.449212, 0.449246,
    0.235713, -0.235781,
    0.226817, -0.226811,
    -0.056708, 0.056736,
    -0.631838, 0.631842,
    -0.259589, 0.259576,
    0.362134, -0.362125,
    0.211935, -0.211929,
    -0.681234, 0.681260,
    0.206147, -0.206191,
    -0.087971, 0.087984,
    0.363344, -0.363337,
};

float Cg_init[2] = {
    -0.224451, -0.224458
};

float xstd_init[12] = {
    0.001023, 0.000081, 0.010709, 0.082328, 0.002595, 0.000743, 0.078819, 0.168191, 0.000866, 0.000113, 0.017920, 0.074496
};

float xmean_init[12] = {
    0.006433, -0.007690, 0.003905, 0.139286, 0.008577, -0.006879, 0.098000, 0.453571, 0.004305, -0.007716, 0.009429, 0.128714
};

