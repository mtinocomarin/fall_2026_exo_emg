// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_11\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.67%
// test_accuracy: 78.12%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_10.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt']}
// generated: 2025-12-12 15:51:36
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.713365, 1.713356,
    0.432240, -0.432293,
    0.935583, -0.935592,
    0.939349, -0.939303,
    1.674587, -1.674672,
    -0.784716, 0.784745,
    -0.680442, 0.680508,
    -0.514469, 0.514481,
    0.902384, -0.902529,
    -1.032685, 1.033044,
    -0.293958, 0.293867,
    0.665857, -0.665986,
};

float Cg_init[2] = {
    -0.857361, -0.857400
};

float xstd_init[12] = {
    0.003931, 0.001439, 0.100899, 0.169366, 0.001804, 0.000565, 0.037663, 0.096912, 0.000557, 0.000101, 0.021829, 0.067572
};

float xmean_init[12] = {
    0.010130, -0.006126, 0.176984, 0.579524, 0.003286, -0.007696, 0.009841, 0.052619, 0.003158, -0.007804, 0.005079, 0.065714
};

