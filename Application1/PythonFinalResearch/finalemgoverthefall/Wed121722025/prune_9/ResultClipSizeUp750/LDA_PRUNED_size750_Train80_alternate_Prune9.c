// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp750
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp750
// sample_size: 750
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.69%
// test_accuracy: 50.89%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_39.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt', 'act2\\trial_11.txt'], 'act1': ['act1\\trial_23.txt', 'act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_37.txt', 'act1\\trial_21.txt', 'act1\\trial_1.txt', 'act1\\trial_10.txt']}
// generated: 2025-12-17 13:46:08
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.726889, 0.726964,
    0.510555, -0.510679,
    -0.052956, 0.052969,
    -0.261728, 0.261781,
    -0.358924, 0.358948,
    -0.359759, 0.359765,
    0.161895, -0.161932,
    0.324896, -0.324876,
    -0.586400, 0.586484,
    0.326301, -0.326429,
    -0.056677, 0.056706,
    0.146771, -0.146752,
};

float Cg_init[2] = {
    -0.232056, -0.232090
};

float xstd_init[12] = {
    0.001055, 0.000082, 0.012696, 0.080322, 0.003178, 0.000851, 0.091718, 0.187163, 0.000878, 0.000115, 0.019804, 0.073852
};

float xmean_init[12] = {
    0.006474, -0.007687, 0.004845, 0.144535, 0.008535, -0.006862, 0.103768, 0.436025, 0.004423, -0.007709, 0.010683, 0.131491
};

