// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_12\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 91.67%
// test_accuracy: 81.25%
// prune_trials_per_label: 12
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_14.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt', 'act2\\trial_33.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-12 16:08:19
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.533438, 1.533439,
    0.196323, -0.196390,
    0.679641, -0.679659,
    1.177590, -1.177539,
    1.539060, -1.539054,
    -1.782996, 1.782979,
    0.395114, -0.395077,
    -0.568812, 0.568816,
    0.934883, -0.935047,
    -0.555031, 0.555422,
    -0.514965, 0.514859,
    0.526324, -0.526467,
};

float Cg_init[2] = {
    -0.901632, -0.901655
};

float xstd_init[12] = {
    0.004119, 0.001515, 0.100033, 0.174082, 0.001865, 0.000582, 0.036402, 0.095725, 0.000580, 0.000099, 0.021003, 0.069309
};

float xmean_init[12] = {
    0.010150, -0.006133, 0.170417, 0.572708, 0.003472, -0.007648, 0.010556, 0.058958, 0.003180, -0.007803, 0.005278, 0.069375
};

