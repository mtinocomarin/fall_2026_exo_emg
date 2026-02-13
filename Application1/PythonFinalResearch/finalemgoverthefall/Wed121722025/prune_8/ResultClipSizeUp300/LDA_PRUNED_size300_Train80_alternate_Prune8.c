// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.67%
// test_accuracy: 53.75%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 13:45:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.792698, 0.792642,
    0.356959, -0.356846,
    0.274551, -0.274567,
    -0.134391, 0.134336,
    -0.556152, 0.556158,
    -0.317851, 0.317834,
    0.373138, -0.373122,
    0.151841, -0.151840,
    -0.955683, 0.955684,
    0.345324, -0.345330,
    -0.264566, 0.264574,
    0.520878, -0.520879,
};

float Cg_init[2] = {
    -0.356643, -0.356633
};

float xstd_init[12] = {
    0.001045, 0.000082, 0.010907, 0.079991, 0.002599, 0.000749, 0.081615, 0.167121, 0.000907, 0.000116, 0.018024, 0.076251
};

float xmean_init[12] = {
    0.006473, -0.007687, 0.004222, 0.141167, 0.008484, -0.006899, 0.099111, 0.446333, 0.004341, -0.007716, 0.009556, 0.129833
};

