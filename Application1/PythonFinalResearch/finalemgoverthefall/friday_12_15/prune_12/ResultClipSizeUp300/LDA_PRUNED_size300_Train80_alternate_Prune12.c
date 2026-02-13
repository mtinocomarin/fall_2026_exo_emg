// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_12\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 92.50%
// test_accuracy: 76.25%
// prune_trials_per_label: 12
// removed_trials: {'act2': ['act2\\trial_15.txt', 'act2\\trial_20.txt', 'act2\\trial_11.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_1.txt', 'act2\\trial_10.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_30.txt'], 'act1': ['act1\\trial_33.txt', 'act1\\trial_28.txt', 'act1\\trial_31.txt', 'act1\\trial_13.txt', 'act1\\trial_21.txt', 'act1\\trial_26.txt', 'act1\\trial_1.txt', 'act1\\trial_22.txt', 'act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_29.txt', 'act1\\trial_35.txt']}
// generated: 2025-12-12 12:45:56
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -1.995681, 1.995652,
    0.766711, -0.766699,
    0.614900, -0.614903,
    1.833555, -1.833521,
    0.374742, -0.374518,
    -0.596157, 0.595871,
    0.132337, -0.132298,
    -0.561268, 0.561297,
    0.139525, -0.139517,
    -0.079348, 0.079301,
    -0.584176, 0.584204,
    -0.354770, 0.354765,
};

float Cg_init[2] = {
    -0.893073, -0.893064
};

float xstd_init[12] = {
    0.004456, 0.001879, 0.148384, 0.202350, 0.001452, 0.000276, 0.031364, 0.095432, 0.000649, 0.000145, 0.027263, 0.097933
};

float xmean_init[12] = {
    0.011323, -0.005462, 0.262267, 0.714800, 0.003587, -0.007721, 0.011733, 0.083200, 0.003586, -0.007731, 0.013467, 0.121000
};

