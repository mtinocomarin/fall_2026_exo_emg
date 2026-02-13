// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp400
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp400
// sample_size: 400
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 81.17%
// test_accuracy: 54.46%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_40.txt', 'act2\\trial_8.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_3.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_10.txt', 'act1\\trial_28.txt', 'act1\\trial_14.txt', 'act1\\trial_25.txt']}
// generated: 2025-12-17 13:46:25
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.802207, 0.802307,
    0.383733, -0.383962,
    0.303165, -0.303133,
    -0.161186, 0.161302,
    -0.451356, 0.451398,
    -0.173991, 0.173937,
    0.215838, -0.215842,
    0.118537, -0.118544,
    -0.830871, 0.830826,
    0.285038, -0.284917,
    -0.170134, 0.170089,
    0.393236, -0.393283,
};

float Cg_init[2] = {
    -0.344342, -0.344363
};

float xstd_init[12] = {
    0.001030, 0.000081, 0.011238, 0.079041, 0.002949, 0.000833, 0.085264, 0.172469, 0.000910, 0.000115, 0.017322, 0.075360
};

float xmean_init[12] = {
    0.006421, -0.007690, 0.004156, 0.141169, 0.008638, -0.006860, 0.102251, 0.444286, 0.004385, -0.007715, 0.008658, 0.130520
};

