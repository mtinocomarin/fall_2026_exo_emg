// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\prune_6\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_edits\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 87.69%
// test_accuracy: 78.75%
// prune_trials_per_label: 6
// removed_trials: {'act1': ['act1\\trial_33.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_10.txt', 'act2\\trial_11.txt', 'act2\\trial_15.txt', 'act2\\trial_16.txt', 'act2\\trial_37.txt']}
// generated: 2025-12-12 13:13:52
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.019964, 1.019967,
    0.203865, -0.203864,
    0.757210, -0.757211,
    0.574351, -0.574347,
    -0.383736, 0.383738,
    -0.021004, 0.020994,
    0.006464, -0.006458,
    0.295459, -0.295448,
    -0.311190, 0.311089,
    0.160760, -0.160610,
    -0.458142, 0.458088,
    0.276981, -0.276979,
};

float Cg_init[2] = {
    -0.457486, -0.457477
};

float xstd_init[12] = {
    0.004700, 0.002180, 0.336080, 0.116583, 0.001469, 0.000267, 0.067934, 0.138921, 0.000680, 0.000156, 0.049232, 0.150796
};

float xmean_init[12] = {
    0.011175, -0.005420, 0.472308, 1.036615, 0.003597, -0.007722, 0.018974, 0.622461, 0.003580, -0.007728, 0.016923, 0.700615
};

