// ============================================================
// Auto-generated LDA model for STM32
// mode: multipletrain_prune:pruned
// dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\prune_2\ResultClipSizeUp700
// source_dataset: C:\Users\mtino\OneDrive\Desktop\ResearchCode\Application1\PythonFinalResearch\finalemg\Wed121722025\ResultClipSizeUp700
// sample_size: 700
// split_type: alternate
// train_percent: 80
// test_percent: 20
// train_accuracy: 66.03%
// test_accuracy: 52.88%
// prune_trials_per_label: 2
// removed_trials: {'act1': ['act1\\trial_27.txt', 'act1\\trial_23.txt'], 'act2': ['act2\\trial_35.txt', 'act2\\trial_33.txt']}
// generated: 2025-12-17 13:42:17
// num_class: 2
// feature_dim: 12
// ============================================================

float Wg_init[24] = {
    -0.254311, 0.254284,
    0.124615, -0.124541,
    0.017134, -0.017135,
    -0.062858, 0.062804,
    -0.380199, 0.380305,
    -0.129485, 0.129392,
    0.065904, -0.065915,
    0.264076, -0.264100,
    -0.371327, 0.371271,
    0.155781, -0.155643,
    0.001438, -0.001457,
    0.108492, -0.108563,
};

float Cg_init[2] = {
    -0.092392, -0.092385
};

float xstd_init[12] = {
    0.000999, 0.000079, 0.012385, 0.079524, 0.003009, 0.000832, 0.090126, 0.180129, 0.000858, 0.000111, 0.019646, 0.074988
};

float xmean_init[12] = {
    0.006469, -0.007691, 0.004957, 0.142001, 0.008658, -0.006837, 0.108274, 0.444872, 0.004299, -0.007720, 0.010598, 0.125590
};

