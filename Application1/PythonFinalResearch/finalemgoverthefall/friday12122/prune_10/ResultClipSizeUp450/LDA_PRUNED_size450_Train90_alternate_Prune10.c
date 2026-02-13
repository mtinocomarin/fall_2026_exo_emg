// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_10\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 85.82%
// test_accuracy: 78.12%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_2.txt', 'act2\\trial_12.txt', 'act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_29.txt', 'act2\\trial_35.txt', 'act2\\trial_13.txt', 'act2\\trial_15.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_34.txt', 'act1\\trial_23.txt', 'act1\\trial_30.txt', 'act1\\trial_31.txt', 'act1\\trial_17.txt', 'act1\\trial_20.txt', 'act1\\trial_37.txt', 'act1\\trial_39.txt', 'act1\\trial_40.txt']}
// generated: 2025-12-12 16:07:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.091009, 1.091058,
    -0.040305, 0.040325,
    0.639608, -0.639649,
    0.921270, -0.921279,
    1.135677, -1.135851,
    -1.236087, 1.236296,
    -0.063186, 0.063162,
    -0.083620, 0.083615,
    -0.547082, 0.547255,
    0.562352, -0.562727,
    -0.554482, 0.554619,
    0.153531, -0.153370,
};

float Cg_init[2] = {
    -0.503313, -0.503372
};

float xstd_init[12] = {
    0.003748, 0.001390, 0.100658, 0.171820, 0.001689, 0.000520, 0.030120, 0.084032, 0.001509, 0.000089, 0.018979, 0.066057
};

float xmean_init[12] = {
    0.009793, -0.006284, 0.166795, 0.581635, 0.003295, -0.007705, 0.008013, 0.053077, 0.003275, -0.007807, 0.005513, 0.068366
};

