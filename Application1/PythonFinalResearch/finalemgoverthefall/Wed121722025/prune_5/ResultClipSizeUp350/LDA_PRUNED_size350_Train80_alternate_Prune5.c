// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_5\ResultClipSizeUp350
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp350
// sample_size: 350
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.62%
// test_accuracy: 57.29%
// prune_trials_per_label: 5
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_28.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_19.txt', 'act2\\trial_39.txt']}
// generated: 2025-12-17 13:43:40
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.518158, 0.518189,
    0.205735, -0.205747,
    0.147203, -0.147212,
    -0.114738, 0.114737,
    -0.449491, 0.449423,
    -0.134639, 0.134704,
    0.174380, -0.174365,
    0.052409, -0.052396,
    -0.653734, 0.653859,
    0.329673, -0.329878,
    -0.131707, 0.131770,
    0.253739, -0.253698,
};

float Cg_init[2] = {
    -0.221736, -0.221757
};

float xstd_init[12] = {
    0.001006, 0.000080, 0.011713, 0.078840, 0.002748, 0.000760, 0.079862, 0.167540, 0.000872, 0.000116, 0.017199, 0.072081
};

float xmean_init[12] = {
    0.006411, -0.007692, 0.004609, 0.140988, 0.008615, -0.006872, 0.102222, 0.445185, 0.004365, -0.007717, 0.008066, 0.128642
};

