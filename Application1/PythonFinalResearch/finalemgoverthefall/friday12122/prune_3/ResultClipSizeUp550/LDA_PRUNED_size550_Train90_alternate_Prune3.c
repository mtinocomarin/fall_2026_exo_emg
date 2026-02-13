// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\prune_3\ResultClipSizeUp550
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\set1final2\ResultClipSizeUp550
// sample_size: 550
// split_type: alternate
// train_percent: 90
// test_percent: 10
// train_accuracy: 77.12%
// test_accuracy: 73.75%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_34.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_16.txt', 'act2\\trial_2.txt']}
// generated: 2025-12-12 16:03:31
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.530704, 0.530707,
    -0.299148, 0.299116,
    0.319187, -0.319208,
    0.711454, -0.711424,
    0.673170, -0.673055,
    -0.773100, 0.772984,
    -0.002463, 0.002479,
    -0.054205, 0.054196,
    -0.388617, 0.388428,
    0.291734, -0.291342,
    -0.349984, 0.349870,
    0.178281, -0.178473,
};

float Cg_init[2] = {
    -0.285457, -0.285435
};

float xstd_init[12] = {
    0.003779, 0.001383, 0.103675, 0.167825, 0.001521, 0.000452, 0.026458, 0.075009, 0.001599, 0.000088, 0.016125, 0.066541
};

float xmean_init[12] = {
    0.009890, -0.006247, 0.173011, 0.583273, 0.003160, -0.007736, 0.006586, 0.047576, 0.003220, -0.007809, 0.004283, 0.066485
};

