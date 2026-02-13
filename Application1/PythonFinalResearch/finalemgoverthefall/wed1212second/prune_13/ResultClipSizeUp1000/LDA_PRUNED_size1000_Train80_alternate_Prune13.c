// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_13\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.61%
// test_accuracy: 68.75%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-17 17:06:24
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.115130, 0.114911,
    -0.138498, 0.138978,
    0.025613, -0.025671,
    0.160214, -0.160454,
    1.797185, -1.797212,
    -1.271958, 1.271929,
    0.017227, -0.017208,
    0.141159, -0.141145,
    -0.728496, 0.728545,
    -0.142759, 0.142710,
    0.613116, -0.613156,
    1.313295, -1.313287,
};

float Cg_init[2] = {
    -0.716511, -0.716524
};

float xstd_init[12] = {
    0.000947, 0.000075, 0.007650, 0.066616, 0.000703, 0.000108, 0.013929, 0.051629, 0.003133, 0.001008, 0.121769, 0.215325
};

float xmean_init[12] = {
    0.005668, -0.007751, 0.002142, 0.094682, 0.002373, -0.007855, 0.004358, 0.045928, 0.008824, -0.006574, 0.141349, 0.482049
};

