// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_13\ResultClipSizeUp900
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp900
// sample_size: 900
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 74.46%
// test_accuracy: 52.21%
// prune_trials_per_label: 13
// removed_trials: {'act2': ['act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_11.txt', 'act2\\trial_23.txt', 'act2\\trial_25.txt', 'act2\\trial_39.txt', 'act2\\trial_14.txt', 'act2\\trial_21.txt', 'act2\\trial_10.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_22.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_25.txt', 'act1\\trial_23.txt', 'act1\\trial_33.txt', 'act1\\trial_30.txt', 'act1\\trial_26.txt', 'act1\\trial_21.txt', 'act1\\trial_12.txt', 'act1\\trial_29.txt', 'act1\\trial_31.txt', 'act1\\trial_37.txt', 'act1\\trial_40.txt', 'act1\\trial_8.txt']}
// generated: 2025-12-17 13:48:20
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.526958, 0.526898,
    0.299069, -0.298921,
    -0.050318, 0.050299,
    -0.136335, 0.136243,
    -0.334034, 0.334059,
    -0.278967, 0.278982,
    -0.069011, 0.068986,
    0.248024, -0.248005,
    -0.621701, 0.621851,
    0.355566, -0.355879,
    0.039394, -0.039316,
    0.154052, -0.153949,
};

float Cg_init[2] = {
    -0.220640, -0.220656
};

float xstd_init[12] = {
    0.001094, 0.000083, 0.012651, 0.081683, 0.003265, 0.000898, 0.093406, 0.187308, 0.000884, 0.000117, 0.019585, 0.076809
};

float xmean_init[12] = {
    0.006554, -0.007684, 0.004788, 0.147678, 0.008432, -0.006874, 0.101177, 0.429722, 0.004436, -0.007707, 0.010857, 0.130403
};

