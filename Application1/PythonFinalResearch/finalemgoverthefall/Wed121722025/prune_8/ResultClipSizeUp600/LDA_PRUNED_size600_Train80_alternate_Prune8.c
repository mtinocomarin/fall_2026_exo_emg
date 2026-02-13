// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_8\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.05%
// test_accuracy: 52.84%
// prune_trials_per_label: 8
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt']}
// generated: 2025-12-17 13:45:30
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.562362, 0.562385,
    0.384133, -0.384197,
    -0.037140, 0.037150,
    -0.250876, 0.250906,
    -0.489278, 0.489296,
    -0.189377, 0.189383,
    0.074193, -0.074215,
    0.262326, -0.262325,
    -0.570450, 0.570454,
    0.273875, -0.273867,
    0.076525, -0.076528,
    0.127430, -0.127446,
};

float Cg_init[2] = {
    -0.220887, -0.220894
};

float xstd_init[12] = {
    0.001037, 0.000080, 0.010874, 0.080700, 0.003092, 0.000858, 0.091202, 0.182303, 0.000830, 0.000110, 0.018393, 0.073503
};

float xmean_init[12] = {
    0.006481, -0.007688, 0.003737, 0.143864, 0.008545, -0.006863, 0.102879, 0.432955, 0.004373, -0.007714, 0.009798, 0.131743
};

