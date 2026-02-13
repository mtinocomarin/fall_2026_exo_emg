// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_3\ResultClipSizeUp300
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp300
// sample_size: 300
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 71.72%
// test_accuracy: 52.50%
// prune_trials_per_label: 3
// removed_trials: {'act1': ['act1\\trial_26.txt', 'act1\\trial_27.txt', 'act1\\trial_37.txt'], 'act2': ['act2\\trial_14.txt', 'act2\\trial_33.txt', 'act2\\trial_35.txt']}
// generated: 2025-12-17 13:42:34
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.433514, 0.433579,
    0.238011, -0.238153,
    0.166695, -0.166677,
    -0.093523, 0.093592,
    -0.566906, 0.566926,
    -0.171878, 0.171850,
    0.251856, -0.251857,
    0.171709, -0.171706,
    -0.571676, 0.571679,
    0.179041, -0.179025,
    -0.097381, 0.097373,
    0.325157, -0.325170,
};

float Cg_init[2] = {
    -0.187481, -0.187492
};

float xstd_init[12] = {
    0.001019, 0.000081, 0.010791, 0.081795, 0.002556, 0.000732, 0.078628, 0.166454, 0.000869, 0.000112, 0.017714, 0.074264
};

float xmean_init[12] = {
    0.006411, -0.007691, 0.004046, 0.139448, 0.008577, -0.006880, 0.099586, 0.453379, 0.004313, -0.007717, 0.009195, 0.128414
};

