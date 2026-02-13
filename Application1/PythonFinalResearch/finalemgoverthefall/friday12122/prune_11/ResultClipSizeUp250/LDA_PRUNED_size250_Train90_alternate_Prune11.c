// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_11\ResultClipSizeUp250
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp250
// sample_size: 250
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 91.50%
// test_accuracy: 84.38%
// prune_trials_per_label: 11
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_17.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_32.txt', 'act1\\trial_33.txt', 'act1\\trial_35.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt'], 'act2': ['act2\\trial_2.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_18.txt', 'act2\\trial_6.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_23.txt', 'act2\\trial_31.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-12 16:07:46
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.446353, 1.446340,
    0.165752, -0.165796,
    0.749441, -0.749463,
    1.076716, -1.076669,
    1.324551, -1.324609,
    -1.653747, 1.653810,
    0.393136, -0.393119,
    -0.484858, 0.484861,
    1.060938, -1.061094,
    -0.611761, 0.612162,
    -0.472402, 0.472291,
    0.423544, -0.423696,
};

float Cg_init[2] = {
    -0.878078, -0.878111
};

float xstd_init[12] = {
    0.004051, 0.001490, 0.099383, 0.171358, 0.001839, 0.000572, 0.035735, 0.094197, 0.000576, 0.000098, 0.020602, 0.068942
};

float xmean_init[12] = {
    0.010121, -0.006151, 0.170667, 0.574400, 0.003433, -0.007655, 0.010267, 0.058200, 0.003169, -0.007806, 0.005067, 0.067400
};

