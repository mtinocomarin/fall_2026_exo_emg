// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_12\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 78.54%
// test_accuracy: 51.56%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_35.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_18.txt', 'act2\\trial_23.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_33.txt', 'act1\\trial_1.txt', 'act1\\trial_29.txt', 'act1\\trial_3.txt', 'act1\\trial_30.txt']}
// generated: 2025-12-17 13:47:37
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.870086, 0.870196,
    0.661459, -0.661631,
    -0.051733, 0.051752,
    -0.339383, 0.339468,
    -0.570847, 0.570834,
    -0.134359, 0.134338,
    0.224792, -0.224775,
    0.140473, -0.140421,
    -0.785740, 0.785904,
    0.419639, -0.419907,
    0.005859, -0.005809,
    0.182309, -0.182239,
};

float Cg_init[2] = {
    -0.320495, -0.320558
};

float xstd_init[12] = {
    0.001092, 0.000082, 0.012505, 0.081505, 0.003092, 0.000849, 0.092106, 0.180238, 0.000864, 0.000109, 0.018273, 0.071225
};

float xmean_init[12] = {
    0.006494, -0.007685, 0.004500, 0.144167, 0.008514, -0.006863, 0.104056, 0.438667, 0.004369, -0.007719, 0.009667, 0.125250
};

