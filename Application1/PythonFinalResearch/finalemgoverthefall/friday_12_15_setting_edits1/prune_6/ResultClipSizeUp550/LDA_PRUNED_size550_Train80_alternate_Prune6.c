// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.77%
// test_accuracy: 66.25%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_24.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt'], 'act2': ['act2\\trial_16.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_20.txt', 'act2\\trial_10.txt']}
// generated: 2025-12-12 13:14:01
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.722412, 0.722413,
    0.033759, -0.033769,
    0.614221, -0.614208,
    0.389722, -0.389730,
    -0.627886, 0.628064,
    0.196463, -0.196634,
    0.104736, -0.104753,
    0.195749, -0.195741,
    0.187379, -0.187416,
    -0.291879, 0.291930,
    -0.236707, 0.236693,
    0.357480, -0.357496,
};

float Cg_init[2] = {
    -0.292226, -0.292232
};

float xstd_init[12] = {
    0.004708, 0.002184, 0.357349, 0.123927, 0.001211, 0.000212, 0.053562, 0.136634, 0.000685, 0.000169, 0.050892, 0.139382
};

float xmean_init[12] = {
    0.010693, -0.005544, 0.459486, 1.033616, 0.003460, -0.007749, 0.014615, 0.626154, 0.003539, -0.007733, 0.014487, 0.694385
};

