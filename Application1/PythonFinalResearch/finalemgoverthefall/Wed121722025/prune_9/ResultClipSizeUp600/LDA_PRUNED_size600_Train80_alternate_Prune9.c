// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_9\ResultClipSizeUp600
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp600
// sample_size: 600
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 75.49%
// test_accuracy: 53.98%
// prune_trials_per_label: 9
// removed_trials: {'act2': ['act2\\trial_35.txt', 'act2\\trial_39.txt', 'act2\\trial_25.txt', 'act2\\trial_33.txt', 'act2\\trial_14.txt', 'act2\\trial_23.txt', 'act2\\trial_37.txt', 'act2\\trial_19.txt', 'act2\\trial_22.txt'], 'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt', 'act1\\trial_26.txt', 'act1\\trial_33.txt', 'act1\\trial_21.txt', 'act1\\trial_30.txt', 'act1\\trial_37.txt', 'act1\\trial_25.txt', 'act1\\trial_3.txt']}
// generated: 2025-12-17 13:46:02
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.622152, 0.622170,
    0.448529, -0.448588,
    -0.044716, 0.044726,
    -0.297534, 0.297563,
    -0.449617, 0.449654,
    -0.234682, 0.234672,
    0.080844, -0.080868,
    0.267700, -0.267708,
    -0.602966, 0.602948,
    0.257014, -0.256959,
    0.079333, -0.079345,
    0.120999, -0.121033,
};

float Cg_init[2] = {
    -0.240704, -0.240709
};

float xstd_init[12] = {
    0.001057, 0.000081, 0.011080, 0.081479, 0.003145, 0.000872, 0.092533, 0.184973, 0.000840, 0.000111, 0.018561, 0.073055
};

float xmean_init[12] = {
    0.006491, -0.007686, 0.003900, 0.145376, 0.008567, -0.006850, 0.104190, 0.435020, 0.004386, -0.007712, 0.010013, 0.132886
};

