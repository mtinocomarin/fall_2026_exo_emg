// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_10\ResultClipSizeUp450
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp450
// sample_size: 450
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 80.11%
// test_accuracy: 57.03%
// prune_trials_per_label: 10
// removed_trials: {'act2': ['act2\\trial_14.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt', 'act2\\trial_37.txt', 'act2\\trial_39.txt', 'act2\\trial_18.txt', 'act2\\trial_19.txt', 'act2\\trial_20.txt', 'act2\\trial_21.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_37.txt', 'act1\\trial_23.txt', 'act1\\trial_25.txt', 'act1\\trial_26.txt', 'act1\\trial_3.txt', 'act1\\trial_10.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_33.txt']}
// generated: 2025-12-17 13:46:27
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.644470, 0.644454,
    0.316580, -0.316494,
    0.119772, -0.119786,
    -0.188502, 0.188449,
    -0.675767, 0.675749,
    -0.131358, 0.131361,
    0.314317, -0.314299,
    0.147097, -0.147069,
    -0.832817, 0.832940,
    0.404761, -0.404974,
    -0.047765, 0.047832,
    0.260935, -0.260893,
};

float Cg_init[2] = {
    -0.323001, -0.323020
};

float xstd_init[12] = {
    0.001028, 0.000078, 0.010989, 0.079347, 0.002998, 0.000794, 0.084381, 0.176848, 0.000849, 0.000115, 0.018667, 0.070852
};

float xmean_init[12] = {
    0.006464, -0.007685, 0.003864, 0.145568, 0.008584, -0.006879, 0.099621, 0.439659, 0.004369, -0.007714, 0.009848, 0.128977
};

