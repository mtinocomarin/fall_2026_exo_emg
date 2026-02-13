// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_13\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 86.19%
// test_accuracy: 78.68%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_34.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_32.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_1.txt', 'act1\\trial_17.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_25.txt', 'act2\\trial_34.txt', 'act2\\trial_6.txt', 'act2\\trial_10.txt', 'act2\\trial_28.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-12 16:09:22
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.667099, 0.667085,
    -0.298063, 0.298096,
    0.604514, -0.604546,
    0.605996, -0.605982,
    0.912464, -0.912483,
    -0.935248, 0.935283,
    -0.129797, 0.129790,
    -0.143156, 0.143147,
    0.611217, -0.611227,
    0.233473, -0.233459,
    -0.328357, 0.328359,
    0.016323, -0.016343,
};

float Cg_init[2] = {
    -0.540463, -0.540479
};

float xstd_init[12] = {
    0.003148, 0.001227, 0.101033, 0.165632, 0.001214, 0.000372, 0.019117, 0.067151, 0.000507, 0.000061, 0.011249, 0.057565
};

float xmean_init[12] = {
    0.009490, -0.006342, 0.172652, 0.586445, 0.003045, -0.007762, 0.005013, 0.046547, 0.003077, -0.007820, 0.002864, 0.060000
};

