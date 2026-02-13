// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_9\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 91.67%
// test_accuracy: 81.25%
// prune_trials_per_label: 9
// removed_trials: {'act1': ['act1\\trial_13.txt', 'act1\\trial_33.txt', 'act1\\trial_26.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_2.txt', 'act1\\trial_21.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt'], 'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_14.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt', 'act2\\trial_40.txt', 'act2\\trial_18.txt']}
// generated: 2025-12-17 12:40:18
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.123881, 1.123927,
    0.154957, -0.154962,
    0.154010, -0.154044,
    1.678540, -1.678516,
    -0.666551, 0.666266,
    0.190434, -0.190163,
    0.168360, -0.168312,
    -0.386309, 0.386265,
    -0.055564, 0.055470,
    -0.154289, 0.154482,
    -0.506338, 0.506291,
    0.130558, -0.130615,
};

float Cg_init[2] = {
    -0.675758, -0.675758
};

float xstd_init[12] = {
    0.004479, 0.001883, 0.149736, 0.203675, 0.001461, 0.000265, 0.037263, 0.100334, 0.000688, 0.000176, 0.031387, 0.108385
};

float xmean_init[12] = {
    0.010891, -0.005576, 0.247247, 0.691304, 0.003595, -0.007720, 0.013623, 0.090145, 0.003561, -0.007722, 0.013140, 0.122319
};

