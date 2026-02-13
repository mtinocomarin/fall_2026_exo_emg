// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 77.27%
// test_accuracy: 77.27%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_30.txt'], 'act2': ['act2\\trial_20.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 16:03:33
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.623776, 0.623820,
    -0.197945, 0.197949,
    0.319832, -0.319868,
    0.612099, -0.612098,
    0.622182, -0.622253,
    -0.806696, 0.806779,
    0.040396, -0.040403,
    -0.006014, 0.006007,
    -0.361360, 0.361501,
    0.349881, -0.350182,
    -0.305380, 0.305491,
    0.118115, -0.118006,
};

float Cg_init[2] = {
    -0.251480, -0.251511
};

float xstd_init[12] = {
    0.003882, 0.001472, 0.105876, 0.166861, 0.001471, 0.000428, 0.024395, 0.073415, 0.001573, 0.000087, 0.015324, 0.065280
};

float xmean_init[12] = {
    0.009855, -0.006231, 0.170763, 0.584518, 0.003134, -0.007743, 0.005877, 0.047824, 0.003217, -0.007810, 0.004151, 0.066391
};

