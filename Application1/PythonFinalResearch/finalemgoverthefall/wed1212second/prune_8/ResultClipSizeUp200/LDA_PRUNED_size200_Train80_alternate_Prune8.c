// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_8\ResultClipSizeUp200
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp200
// sample_size: 200
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.67%
// test_accuracy: 70.83%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt', 'act1\\trial_20.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_19.txt', 'act2\\trial_11.txt', 'act2\\trial_13.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_22.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 17:02:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    0.444518, -0.444433,
    0.265845, -0.266072,
    -0.094663, 0.094716,
    -0.788018, 0.788144,
    1.876235, -1.876171,
    -1.443443, 1.443354,
    -0.516053, 0.516059,
    0.286976, -0.286962,
    -0.952468, 0.952446,
    -0.550855, 0.550910,
    0.305511, -0.305541,
    2.291461, -2.291458,
};

float Cg_init[2] = {
    -0.914991, -0.914992
};

float xstd_init[12] = {
    0.000906, 0.000062, 0.008210, 0.069398, 0.000762, 0.000128, 0.017629, 0.058757, 0.002981, 0.000914, 0.116937, 0.214738
};

float xmean_init[12] = {
    0.005605, -0.007761, 0.001481, 0.090833, 0.002393, -0.007847, 0.006481, 0.052222, 0.008741, -0.006688, 0.130926, 0.467222
};

