// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_13\ResultClipSizeUp800
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp800
// sample_size: 800
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.53%
// test_accuracy: 68.33%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_25.txt', 'act1\\trial_35.txt', 'act1\\trial_40.txt', 'act1\\trial_26.txt', 'act1\\trial_39.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_15.txt', 'act2\\trial_40.txt', 'act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_24.txt', 'act2\\trial_22.txt', 'act2\\trial_27.txt', 'act2\\trial_29.txt']}
// generated: 2025-12-17 17:06:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.251650, 0.251473,
    -0.208028, 0.208457,
    0.006851, -0.006913,
    0.104477, -0.104684,
    2.020677, -2.020827,
    -1.342988, 1.343122,
    -0.005337, 0.005322,
    0.165619, -0.165633,
    -1.187904, 1.187955,
    -0.017914, 0.017863,
    0.683048, -0.683070,
    1.352851, -1.352870,
};

float Cg_init[2] = {
    -0.778649, -0.778715
};

float xstd_init[12] = {
    0.000964, 0.000078, 0.009171, 0.068107, 0.000685, 0.000101, 0.014790, 0.052115, 0.003436, 0.001068, 0.123139, 0.216627
};

float xmean_init[12] = {
    0.005652, -0.007748, 0.002667, 0.098386, 0.002378, -0.007853, 0.004865, 0.048562, 0.009137, -0.006492, 0.148772, 0.492140
};

