// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_4\ResultClipSizeUp500
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp500
// sample_size: 500
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.52%
// test_accuracy: 71.53%
// prune_trials_per_label: 4
// removed_trials: {'act1': ['act1\\trial_37.txt', 'act1\\trial_29.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt']}
// generated: 2025-12-17 17:00:39
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.138075, -0.138110,
    -0.228215, 0.228315,
    0.019103, -0.019116,
    -0.042977, 0.042922,
    1.484575, -1.484627,
    -1.273692, 1.273750,
    -0.226302, 0.226301,
    0.148417, -0.148427,
    -0.483942, 0.483934,
    -0.598783, 0.598804,
    0.294926, -0.294949,
    1.336792, -1.336796,
};

float Cg_init[2] = {
    -0.471272, -0.471293
};

float xstd_init[12] = {
    0.000860, 0.000077, 0.007326, 0.064436, 0.000753, 0.000130, 0.015242, 0.054160, 0.003452, 0.001043, 0.116753, 0.208608
};

float xmean_init[12] = {
    0.005503, -0.007760, 0.001693, 0.089207, 0.002402, -0.007848, 0.005132, 0.047937, 0.009061, -0.006608, 0.133016, 0.471984
};

