// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_10\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 90.91%
// test_accuracy: 78.75%
// prune_trials_per_label: 10
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_28.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_24.txt', 'act1\\trial_1.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt']}
// generated: 2025-12-12 13:15:54
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.224964, 1.224975,
    0.335633, -0.335639,
    1.028335, -1.028330,
    0.621717, -0.621718,
    -0.636783, 0.636861,
    0.205892, -0.205972,
    -0.017474, 0.017472,
    0.324735, -0.324727,
    -0.504850, 0.504751,
    0.180111, -0.179973,
    -0.396930, 0.396882,
    0.400120, -0.400117,
};

float Cg_init[2] = {
    -0.575916, -0.575913
};

float xstd_init[12] = {
    0.004518, 0.001910, 0.338000, 0.122357, 0.001487, 0.000263, 0.071314, 0.139331, 0.000702, 0.000162, 0.050315, 0.148893
};

float xmean_init[12] = {
    0.010902, -0.005616, 0.459394, 1.034727, 0.003604, -0.007725, 0.020303, 0.614727, 0.003566, -0.007732, 0.016364, 0.695636
};

