// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_13\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 89.04%
// test_accuracy: 65.62%
// prune_trials_per_label: 13
// removed_trials: {'act1': ['act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_33.txt', 'act1\\trial_10.txt', 'act1\\trial_16.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_24.txt', 'act1\\trial_27.txt', 'act1\\trial_1.txt', 'act1\\trial_13.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_12.txt', 'act2\\trial_13.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_21.txt', 'act2\\trial_22.txt', 'act2\\trial_26.txt']}
// generated: 2025-12-12 13:17:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.224303, 1.224321,
    0.179336, -0.179337,
    0.981344, -0.981346,
    0.501212, -0.501219,
    -0.293170, 0.293050,
    -0.169829, 0.169966,
    0.118557, -0.118564,
    0.153327, -0.153338,
    -0.100820, 0.100736,
    -0.466736, 0.466879,
    -0.140374, 0.140324,
    0.669750, -0.669761,
};

float Cg_init[2] = {
    -0.519678, -0.519687
};

float xstd_init[12] = {
    0.004767, 0.002034, 0.365702, 0.123302, 0.001375, 0.000234, 0.068566, 0.140273, 0.000692, 0.000175, 0.058323, 0.137859
};

float xmean_init[12] = {
    0.011166, -0.005480, 0.488889, 1.039824, 0.003555, -0.007734, 0.020175, 0.628947, 0.003580, -0.007729, 0.017251, 0.706842
};

