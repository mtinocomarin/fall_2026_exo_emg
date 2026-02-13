// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\prune_12\ResultClipSizeUp650
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\friday_12_15_setting_edits2\ResultClipSizeUp650
// sample_size: 650
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 85.62%
// test_accuracy: 70.31%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_20.txt', 'act2\\trial_14.txt', 'act2\\trial_15.txt', 'act2\\trial_39.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_33.txt', 'act2\\trial_25.txt', 'act2\\trial_29.txt', 'act2\\trial_1.txt', 'act2\\trial_12.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_22.txt', 'act1\\trial_27.txt', 'act1\\trial_40.txt', 'act1\\trial_13.txt', 'act1\\trial_28.txt', 'act1\\trial_29.txt', 'act1\\trial_24.txt', 'act1\\trial_25.txt', 'act1\\trial_31.txt']}
// generated: 2025-12-17 12:41:50
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.006488, 1.006489,
    0.242486, -0.242441,
    0.545447, -0.545473,
    0.859922, -0.859899,
    -0.552900, 0.552907,
    0.299472, -0.299471,
    -0.029499, 0.029463,
    -0.150721, 0.150716,
    0.441703, -0.441880,
    -0.192196, 0.192574,
    -0.608429, 0.608358,
    0.109484, -0.109646,
};

float Cg_init[2] = {
    -0.435137, -0.435149
};

float xstd_init[12] = {
    0.004153, 0.001811, 0.153017, 0.207108, 0.001217, 0.000210, 0.032344, 0.087208, 0.000603, 0.000144, 0.025013, 0.098456
};

float xmean_init[12] = {
    0.010532, -0.005632, 0.252667, 0.697000, 0.003486, -0.007747, 0.011111, 0.084167, 0.003528, -0.007735, 0.011389, 0.120167
};

