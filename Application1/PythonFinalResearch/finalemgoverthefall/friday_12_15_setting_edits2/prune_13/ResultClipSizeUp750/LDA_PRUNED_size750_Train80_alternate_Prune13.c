// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_13\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 83.83%
// test_accuracy: 70.09%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_40.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_13.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt', 'act1\\trial_39.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_20.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_19.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_6.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt']}
// generated: 2025-12-17 12:42:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.821517, 0.821517,
    0.162490, -0.162479,
    0.640167, -0.640189,
    0.758818, -0.758803,
    -0.525092, 0.525195,
    0.243195, -0.243295,
    -0.037764, 0.037757,
    -0.095135, 0.095132,
    0.484931, -0.484942,
    -0.334231, 0.334263,
    -0.640616, 0.640618,
    0.166067, -0.166100,
};

float Cg_init[2] = {
    -0.430143, -0.430149
};

float xstd_init[12] = {
    0.004086, 0.001787, 0.155681, 0.206568, 0.001160, 0.000199, 0.030858, 0.084092, 0.000678, 0.000175, 0.030236, 0.106147
};

float xmean_init[12] = {
    0.010397, -0.005682, 0.254537, 0.696616, 0.003431, -0.007757, 0.010075, 0.079323, 0.003530, -0.007726, 0.012682, 0.122857
};

