// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\prune_8\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.88%
// test_accuracy: 69.85%
// prune_trials_per_label: 8
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_31.txt', 'act1\\trial_21.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt', 'act1\\trial_40.txt', 'act1\\trial_22.txt', 'act1\\trial_35.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_12.txt', 'act2\\trial_15.txt', 'act2\\trial_19.txt', 'act2\\trial_2.txt', 'act2\\trial_16.txt', 'act2\\trial_25.txt', 'act2\\trial_6.txt']}
// generated: 2025-12-12 15:50:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.753086, 0.753116,
    -0.202735, 0.202750,
    0.619731, -0.619774,
    0.561487, -0.561478,
    0.893632, -0.893648,
    -0.850130, 0.850157,
    -0.131401, 0.131392,
    -0.049733, 0.049727,
    -0.575656, 0.575745,
    0.602079, -0.602283,
    -0.400691, 0.400772,
    0.061572, -0.061504,
};

float Cg_init[2] = {
    -0.336989, -0.337019
};

float xstd_init[12] = {
    0.003272, 0.001266, 0.104522, 0.169400, 0.001302, 0.000366, 0.018664, 0.069406, 0.001531, 0.000084, 0.014550, 0.065738
};

float xmean_init[12] = {
    0.009563, -0.006300, 0.175001, 0.586078, 0.003095, -0.007764, 0.004739, 0.049314, 0.003213, -0.007811, 0.003660, 0.066373
};

