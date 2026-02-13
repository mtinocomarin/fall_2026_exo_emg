// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\prune_14\ResultClipSizeUp1000
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\wed1212second\ResultClipSizeUp1000
// sample_size: 1000
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.18%
// test_accuracy: 69.41%
// prune_trials_per_label: 14
// removed_trials: {'act1': ['act1\\trial_24.txt', 'act1\\trial_28.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_29.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_27.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt', 'act1\\trial_11.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_17.txt', 'act2\\trial_35.txt', 'act2\\trial_40.txt', 'act2\\trial_1.txt', 'act2\\trial_11.txt', 'act2\\trial_16.txt', 'act2\\trial_30.txt', 'act2\\trial_14.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_29.txt', 'act2\\trial_37.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-17 17:07:00
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.044527, 0.044420,
    -0.211883, 0.212080,
    0.030156, -0.030174,
    0.202889, -0.202994,
    1.904649, -1.904540,
    -1.335638, 1.335474,
    0.001320, -0.001272,
    0.072875, -0.072856,
    -0.710100, 0.710148,
    -0.153674, 0.153615,
    0.612633, -0.612649,
    1.281763, -1.281738,
};

float Cg_init[2] = {
    -0.722387, -0.722352
};

float xstd_init[12] = {
    0.000950, 0.000076, 0.007501, 0.066077, 0.000716, 0.000110, 0.013928, 0.051793, 0.003144, 0.001011, 0.121584, 0.214092
};

float xmean_init[12] = {
    0.005646, -0.007752, 0.002027, 0.092632, 0.002382, -0.007854, 0.004288, 0.045497, 0.008819, -0.006584, 0.140001, 0.479883
};

